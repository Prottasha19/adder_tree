package spinalproject

import spinal.core._
import spinal.core.sim._
import scala.util.Random

// Define the DUT (Device Under Test) as a case class
case class SimAsynchronousDut() extends Component {
  val io = new Bundle {
    val a, b, c = in UInt (8 bits)
    val result = out UInt (8 bits)
  }
  io.result := io.a + io.b - io.c
}

// Simulation object
object SimAsynchronous {
  def main(args: Array[String]): Unit = {
    SimConfig.withWave.compile(SimAsynchronousDut()).doSim { dut =>
      var idx = 0
      while (idx < 100) {
        val a = Random.nextInt(256)
        val b = Random.nextInt(256)
        val c = Random.nextInt(256)
        dut.io.a #= a
        dut.io.b #= b
        dut.io.c #= c
        sleep(1) // Sleep 1 simulation timestep
        assert(dut.io.result.toInt == ((a + b - c) & 0xFF))
        idx += 1
      }
    }
  }
}

// Object to generate VHDL and Verilog
object SimAsynchronousApp extends App {
  SpinalVhdl(SimAsynchronousDut())
  SpinalVerilog(SimAsynchronousDut())
}

