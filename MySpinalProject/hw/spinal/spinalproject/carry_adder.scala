package spinalproject

import spinal.core._
import spinal.core.sim._

import scala.util.Random

case class CarryAdder(size : Int) extends Component{
  val io = new Bundle {
    val a = in UInt(size bits)
    val b = in UInt(size bits)
    val result = out UInt(size bits)      //result = a + b
  }

  var c = False                   //Carry, like a VHDL variable
  for (i <- 0 until size) {
    //Create some intermediate value in the loop scope.
    val a = io.a(i)
    val b = io.b(i)

    //The carry adder's asynchronous logic
    io.result(i) := a ^ b ^ c
    c \= (a & b) | (a & c) | (b & c);    //variable assignment
  }
}

object CarryAdderProject extends App {
  SpinalVhdl(CarryAdder(8))
  SpinalVerilog(CarryAdder(8))
}

// Simulation Code
object CarryAdderSimulation {
  class Dut extends Component {
    val io = new Bundle {
      val a = in UInt(8 bits)
      val b = in UInt(8 bits)
      val result = out UInt(8 bits)
    }

    val carryAdder = CarryAdder(8)
    carryAdder.io.a := io.a
    carryAdder.io.b := io.b
    io.result := carryAdder.io.result
  }

  def main(args: Array[String]): Unit = {
    SimConfig.withWave.compile(new Dut).doSim { dut =>
      var idx = 0
      while (idx < 100) {
        val a = Random.nextInt(256)
        val b = Random.nextInt(256)

        dut.io.a #= a
        dut.io.b #= b
        sleep(1) // Sleep 1 simulation timestep

        // Compute the expected result manually
        val expectedResult = (a + b) & 0xFF

        // Assert that the result is as expected
        assert(dut.io.result.toInt == expectedResult)

        idx += 1
      }
    }
  }
}
