-- Generator : SpinalHDL v1.10.1    git head : 2527c7c6b0fb0f95e5e1a5722a0be732b364ce43
-- Component : CarryAdder
-- Git hash  : 1703dcbd4dd260e3dc068c9af7cb32c3644fd561

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.all;

package pkg_enum is

end pkg_enum;

library IEEE;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.math_real.all;

package pkg_scala2hdl is
  function pkg_extract (that : std_logic_vector; bitId : integer) return std_logic;
  function pkg_extract (that : std_logic_vector; base : unsigned; size : integer) return std_logic_vector;
  function pkg_cat (a : std_logic_vector; b : std_logic_vector) return std_logic_vector;
  function pkg_not (value : std_logic_vector) return std_logic_vector;
  function pkg_extract (that : unsigned; bitId : integer) return std_logic;
  function pkg_extract (that : unsigned; base : unsigned; size : integer) return unsigned;
  function pkg_cat (a : unsigned; b : unsigned) return unsigned;
  function pkg_not (value : unsigned) return unsigned;
  function pkg_extract (that : signed; bitId : integer) return std_logic;
  function pkg_extract (that : signed; base : unsigned; size : integer) return signed;
  function pkg_cat (a : signed; b : signed) return signed;
  function pkg_not (value : signed) return signed;

  function pkg_mux (sel : std_logic; one : std_logic; zero : std_logic) return std_logic;
  function pkg_mux (sel : std_logic; one : std_logic_vector; zero : std_logic_vector) return std_logic_vector;
  function pkg_mux (sel : std_logic; one : unsigned; zero : unsigned) return unsigned;
  function pkg_mux (sel : std_logic; one : signed; zero : signed) return signed;

  function pkg_toStdLogic (value : boolean) return std_logic;
  function pkg_toStdLogicVector (value : std_logic) return std_logic_vector;
  function pkg_toUnsigned (value : std_logic) return unsigned;
  function pkg_toSigned (value : std_logic) return signed;
  function pkg_stdLogicVector (lit : std_logic_vector) return std_logic_vector;
  function pkg_unsigned (lit : unsigned) return unsigned;
  function pkg_signed (lit : signed) return signed;

  function pkg_resize (that : std_logic_vector; width : integer) return std_logic_vector;
  function pkg_resize (that : unsigned; width : integer) return unsigned;
  function pkg_resize (that : signed; width : integer) return signed;

  function pkg_extract (that : std_logic_vector; high : integer; low : integer) return std_logic_vector;
  function pkg_extract (that : unsigned; high : integer; low : integer) return unsigned;
  function pkg_extract (that : signed; high : integer; low : integer) return signed;

  function pkg_shiftRight (that : std_logic_vector; size : natural) return std_logic_vector;
  function pkg_shiftRight (that : std_logic_vector; size : unsigned) return std_logic_vector;
  function pkg_shiftLeft (that : std_logic_vector; size : natural) return std_logic_vector;
  function pkg_shiftLeft (that : std_logic_vector; size : unsigned) return std_logic_vector;

  function pkg_shiftRight (that : unsigned; size : natural) return unsigned;
  function pkg_shiftRight (that : unsigned; size : unsigned) return unsigned;
  function pkg_shiftLeft (that : unsigned; size : natural) return unsigned;
  function pkg_shiftLeft (that : unsigned; size : unsigned) return unsigned;

  function pkg_shiftRight (that : signed; size : natural) return signed;
  function pkg_shiftRight (that : signed; size : unsigned) return signed;
  function pkg_shiftLeft (that : signed; size : natural) return signed;
  function pkg_shiftLeft (that : signed; size : unsigned; w : integer) return signed;

  function pkg_rotateLeft (that : std_logic_vector; size : unsigned) return std_logic_vector;
end  pkg_scala2hdl;

package body pkg_scala2hdl is
  function pkg_extract (that : std_logic_vector; bitId : integer) return std_logic is
    alias temp : std_logic_vector(that'length-1 downto 0) is that;
  begin
    if bitId >= temp'length then
      return 'U';
    end if;
    return temp(bitId);
  end pkg_extract;

  function pkg_extract (that : std_logic_vector; base : unsigned; size : integer) return std_logic_vector is
    alias temp : std_logic_vector(that'length-1 downto 0) is that;    constant elementCount : integer := temp'length - size + 1;
    type tableType is array (0 to elementCount-1) of std_logic_vector(size-1 downto 0);
    variable table : tableType;
  begin
    for i in 0 to elementCount-1 loop
      table(i) := temp(i + size - 1 downto i);
    end loop;
    if base + size >= elementCount then
      return (size-1 downto 0 => 'U');
    end if;
    return table(to_integer(base));
  end pkg_extract;

  function pkg_cat (a : std_logic_vector; b : std_logic_vector) return std_logic_vector is
    variable cat : std_logic_vector(a'length + b'length-1 downto 0);
  begin
    cat := a & b;
    return cat;
  end pkg_cat;

  function pkg_not (value : std_logic_vector) return std_logic_vector is
    variable ret : std_logic_vector(value'length-1 downto 0);
  begin
    ret := not value;
    return ret;
  end pkg_not;

  function pkg_extract (that : unsigned; bitId : integer) return std_logic is
    alias temp : unsigned(that'length-1 downto 0) is that;
  begin
    if bitId >= temp'length then
      return 'U';
    end if;
    return temp(bitId);
  end pkg_extract;

  function pkg_extract (that : unsigned; base : unsigned; size : integer) return unsigned is
    alias temp : unsigned(that'length-1 downto 0) is that;    constant elementCount : integer := temp'length - size + 1;
    type tableType is array (0 to elementCount-1) of unsigned(size-1 downto 0);
    variable table : tableType;
  begin
    for i in 0 to elementCount-1 loop
      table(i) := temp(i + size - 1 downto i);
    end loop;
    if base + size >= elementCount then
      return (size-1 downto 0 => 'U');
    end if;
    return table(to_integer(base));
  end pkg_extract;

  function pkg_cat (a : unsigned; b : unsigned) return unsigned is
    variable cat : unsigned(a'length + b'length-1 downto 0);
  begin
    cat := a & b;
    return cat;
  end pkg_cat;

  function pkg_not (value : unsigned) return unsigned is
    variable ret : unsigned(value'length-1 downto 0);
  begin
    ret := not value;
    return ret;
  end pkg_not;

  function pkg_extract (that : signed; bitId : integer) return std_logic is
    alias temp : signed(that'length-1 downto 0) is that;
  begin
    if bitId >= temp'length then
      return 'U';
    end if;
    return temp(bitId);
  end pkg_extract;

  function pkg_extract (that : signed; base : unsigned; size : integer) return signed is
    alias temp : signed(that'length-1 downto 0) is that;    constant elementCount : integer := temp'length - size + 1;
    type tableType is array (0 to elementCount-1) of signed(size-1 downto 0);
    variable table : tableType;
  begin
    for i in 0 to elementCount-1 loop
      table(i) := temp(i + size - 1 downto i);
    end loop;
    if base + size >= elementCount then
      return (size-1 downto 0 => 'U');
    end if;
    return table(to_integer(base));
  end pkg_extract;

  function pkg_cat (a : signed; b : signed) return signed is
    variable cat : signed(a'length + b'length-1 downto 0);
  begin
    cat := a & b;
    return cat;
  end pkg_cat;

  function pkg_not (value : signed) return signed is
    variable ret : signed(value'length-1 downto 0);
  begin
    ret := not value;
    return ret;
  end pkg_not;


  -- unsigned shifts
  function pkg_shiftRight (that : unsigned; size : natural) return unsigned is
    variable ret : unsigned(that'length-1 downto 0);
  begin
    if size >= that'length then
      return "";
    else
      ret := shift_right(that,size);
      return ret(that'length-1-size downto 0);
    end if;
  end pkg_shiftRight;

  function pkg_shiftRight (that : unsigned; size : unsigned) return unsigned is
    variable ret : unsigned(that'length-1 downto 0);
  begin
    ret := shift_right(that,to_integer(size));
    return ret;
  end pkg_shiftRight;

  function pkg_shiftLeft (that : unsigned; size : natural) return unsigned is
  begin
    return shift_left(resize(that,that'length + size),size);
  end pkg_shiftLeft;

  function pkg_shiftLeft (that : unsigned; size : unsigned) return unsigned is
  begin
    return shift_left(resize(that,that'length + 2**size'length - 1),to_integer(size));
  end pkg_shiftLeft;

  -- std_logic_vector shifts
  function pkg_shiftRight (that : std_logic_vector; size : natural) return std_logic_vector is
  begin
    return std_logic_vector(pkg_shiftRight(unsigned(that),size));
  end pkg_shiftRight;

  function pkg_shiftRight (that : std_logic_vector; size : unsigned) return std_logic_vector is
  begin
    return std_logic_vector(pkg_shiftRight(unsigned(that),size));
  end pkg_shiftRight;

  function pkg_shiftLeft (that : std_logic_vector; size : natural) return std_logic_vector is
  begin
    return std_logic_vector(pkg_shiftLeft(unsigned(that),size));
  end pkg_shiftLeft;

  function pkg_shiftLeft (that : std_logic_vector; size : unsigned) return std_logic_vector is
  begin
    return std_logic_vector(pkg_shiftLeft(unsigned(that),size));
  end pkg_shiftLeft;

  -- signed shifts
  function pkg_shiftRight (that : signed; size : natural) return signed is
  begin
    return signed(pkg_shiftRight(unsigned(that),size));
  end pkg_shiftRight;

  function pkg_shiftRight (that : signed; size : unsigned) return signed is
  begin
    return shift_right(that,to_integer(size));
  end pkg_shiftRight;

  function pkg_shiftLeft (that : signed; size : natural) return signed is
  begin
    return signed(pkg_shiftLeft(unsigned(that),size));
  end pkg_shiftLeft;

  function pkg_shiftLeft (that : signed; size : unsigned; w : integer) return signed is
  begin
    return shift_left(resize(that,w),to_integer(size));
  end pkg_shiftLeft;

  function pkg_rotateLeft (that : std_logic_vector; size : unsigned) return std_logic_vector is
  begin
    return std_logic_vector(rotate_left(unsigned(that),to_integer(size)));
  end pkg_rotateLeft;

  function pkg_extract (that : std_logic_vector; high : integer; low : integer) return std_logic_vector is
    alias temp : std_logic_vector(that'length-1 downto 0) is that;
  begin
    return temp(high downto low);
  end pkg_extract;

  function pkg_extract (that : unsigned; high : integer; low : integer) return unsigned is
    alias temp : unsigned(that'length-1 downto 0) is that;
  begin
    return temp(high downto low);
  end pkg_extract;

  function pkg_extract (that : signed; high : integer; low : integer) return signed is
    alias temp : signed(that'length-1 downto 0) is that;
  begin
    return temp(high downto low);
  end pkg_extract;

  function pkg_mux (sel : std_logic; one : std_logic; zero : std_logic) return std_logic is
  begin
    if sel = '1' then
      return one;
    else
      return zero;
    end if;
  end pkg_mux;

  function pkg_mux (sel : std_logic; one : std_logic_vector; zero : std_logic_vector) return std_logic_vector is
    variable ret : std_logic_vector(zero'range);
  begin
    if sel = '1' then
      ret := one;
    else
      ret := zero;
    end if;
    return ret;
  end pkg_mux;

  function pkg_mux (sel : std_logic; one : unsigned; zero : unsigned) return unsigned is
    variable ret : unsigned(zero'range);
  begin
    if sel = '1' then
      ret := one;
    else
      ret := zero;
    end if;
    return ret;
  end pkg_mux;

  function pkg_mux (sel : std_logic; one : signed; zero : signed) return signed is
    variable ret : signed(zero'range);
  begin
    if sel = '1' then
      ret := one;
    else
      ret := zero;
    end if;
    return ret;
  end pkg_mux;

  function pkg_toStdLogic (value : boolean) return std_logic is
  begin
    if value = true then
      return '1';
    else
      return '0';
    end if;
  end pkg_toStdLogic;

  function pkg_toStdLogicVector (value : std_logic) return std_logic_vector is
    variable ret : std_logic_vector(0 downto 0);
  begin
    ret(0) := value;
    return ret;
  end pkg_toStdLogicVector;

  function pkg_toUnsigned (value : std_logic) return unsigned is
    variable ret : unsigned(0 downto 0);
  begin
    ret(0) := value;
    return ret;
  end pkg_toUnsigned;

  function pkg_toSigned (value : std_logic) return signed is
    variable ret : signed(0 downto 0);
  begin
    ret(0) := value;
    return ret;
  end pkg_toSigned;

  function pkg_stdLogicVector (lit : std_logic_vector) return std_logic_vector is
    alias ret : std_logic_vector(lit'length-1 downto 0) is lit;
  begin
    return std_logic_vector(ret);
  end pkg_stdLogicVector;

  function pkg_unsigned (lit : unsigned) return unsigned is
    alias ret : unsigned(lit'length-1 downto 0) is lit;
  begin
    return unsigned(ret);
  end pkg_unsigned;

  function pkg_signed (lit : signed) return signed is
    alias ret : signed(lit'length-1 downto 0) is lit;
  begin
    return signed(ret);
  end pkg_signed;

  function pkg_resize (that : std_logic_vector; width : integer) return std_logic_vector is
  begin
    return std_logic_vector(resize(unsigned(that),width));
  end pkg_resize;

  function pkg_resize (that : unsigned; width : integer) return unsigned is
    variable ret : unsigned(width-1 downto 0);
  begin
    if that'length = 0 then
       ret := (others => '0');
    else
       ret := resize(that,width);
    end if;
    return ret;
  end pkg_resize;
  function pkg_resize (that : signed; width : integer) return signed is
    alias temp : signed(that'length-1 downto 0) is that;
    variable ret : signed(width-1 downto 0);
  begin
    if temp'length = 0 then
       ret := (others => '0');
    elsif temp'length >= width then
       ret := temp(width-1 downto 0);
    else
       ret := resize(temp,width);
    end if;
    return ret;
  end pkg_resize;
end pkg_scala2hdl;


library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library work;
use work.pkg_scala2hdl.all;
use work.all;
use work.pkg_enum.all;


entity CarryAdder is
  port(
    io_a : in unsigned(7 downto 0);
    io_b : in unsigned(7 downto 0);
    io_result : out unsigned(7 downto 0)
  );
end CarryAdder;

architecture arch of CarryAdder is

  signal c_8 : std_logic;
  signal c_7 : std_logic;
  signal c_6 : std_logic;
  signal c_5 : std_logic;
  signal c_4 : std_logic;
  signal c_3 : std_logic;
  signal c_2 : std_logic;
  signal c_1 : std_logic;
  signal c : std_logic;
  signal zz_c_1 : std_logic;
  signal zz_c_1_1 : std_logic;
  signal zz_c_2 : std_logic;
  signal zz_c_2_1 : std_logic;
  signal zz_c_3 : std_logic;
  signal zz_c_3_1 : std_logic;
  signal zz_c_4 : std_logic;
  signal zz_c_4_1 : std_logic;
  signal zz_c_5 : std_logic;
  signal zz_c_5_1 : std_logic;
  signal zz_c_6 : std_logic;
  signal zz_c_6_1 : std_logic;
  signal zz_c_7 : std_logic;
  signal zz_c_7_1 : std_logic;
  signal zz_c_8 : std_logic;
  signal zz_c_8_1 : std_logic;
begin
  process(c_7,zz_c_8,zz_c_8_1)
  begin
    c_8 <= c_7;
    c_8 <= (((zz_c_8 and zz_c_8_1) or (zz_c_8 and c_7)) or (zz_c_8_1 and c_7));
  end process;

  process(c_6,zz_c_7,zz_c_7_1)
  begin
    c_7 <= c_6;
    c_7 <= (((zz_c_7 and zz_c_7_1) or (zz_c_7 and c_6)) or (zz_c_7_1 and c_6));
  end process;

  process(c_5,zz_c_6,zz_c_6_1)
  begin
    c_6 <= c_5;
    c_6 <= (((zz_c_6 and zz_c_6_1) or (zz_c_6 and c_5)) or (zz_c_6_1 and c_5));
  end process;

  process(c_4,zz_c_5,zz_c_5_1)
  begin
    c_5 <= c_4;
    c_5 <= (((zz_c_5 and zz_c_5_1) or (zz_c_5 and c_4)) or (zz_c_5_1 and c_4));
  end process;

  process(c_3,zz_c_4,zz_c_4_1)
  begin
    c_4 <= c_3;
    c_4 <= (((zz_c_4 and zz_c_4_1) or (zz_c_4 and c_3)) or (zz_c_4_1 and c_3));
  end process;

  process(c_2,zz_c_3,zz_c_3_1)
  begin
    c_3 <= c_2;
    c_3 <= (((zz_c_3 and zz_c_3_1) or (zz_c_3 and c_2)) or (zz_c_3_1 and c_2));
  end process;

  process(c_1,zz_c_2,zz_c_2_1)
  begin
    c_2 <= c_1;
    c_2 <= (((zz_c_2 and zz_c_2_1) or (zz_c_2 and c_1)) or (zz_c_2_1 and c_1));
  end process;

  process(c,zz_c_1,zz_c_1_1)
  begin
    c_1 <= c;
    c_1 <= (((zz_c_1 and zz_c_1_1) or (zz_c_1 and c)) or (zz_c_1_1 and c));
  end process;

  c <= pkg_toStdLogic(false);
  zz_c_1 <= pkg_extract(io_a,0);
  zz_c_1_1 <= pkg_extract(io_b,0);
  process(zz_c_1,zz_c_1_1,c,zz_c_2,zz_c_2_1,c_1,zz_c_3,zz_c_3_1,c_2,zz_c_4,zz_c_4_1,c_3,zz_c_5,zz_c_5_1,c_4,zz_c_6,zz_c_6_1,c_5,zz_c_7,zz_c_7_1,c_6,zz_c_8,zz_c_8_1,c_7)
  begin
    io_result(0) <= ((zz_c_1 xor zz_c_1_1) xor c);
    io_result(1) <= ((zz_c_2 xor zz_c_2_1) xor c_1);
    io_result(2) <= ((zz_c_3 xor zz_c_3_1) xor c_2);
    io_result(3) <= ((zz_c_4 xor zz_c_4_1) xor c_3);
    io_result(4) <= ((zz_c_5 xor zz_c_5_1) xor c_4);
    io_result(5) <= ((zz_c_6 xor zz_c_6_1) xor c_5);
    io_result(6) <= ((zz_c_7 xor zz_c_7_1) xor c_6);
    io_result(7) <= ((zz_c_8 xor zz_c_8_1) xor c_7);
  end process;

  zz_c_2 <= pkg_extract(io_a,1);
  zz_c_2_1 <= pkg_extract(io_b,1);
  zz_c_3 <= pkg_extract(io_a,2);
  zz_c_3_1 <= pkg_extract(io_b,2);
  zz_c_4 <= pkg_extract(io_a,3);
  zz_c_4_1 <= pkg_extract(io_b,3);
  zz_c_5 <= pkg_extract(io_a,4);
  zz_c_5_1 <= pkg_extract(io_b,4);
  zz_c_6 <= pkg_extract(io_a,5);
  zz_c_6_1 <= pkg_extract(io_b,5);
  zz_c_7 <= pkg_extract(io_a,6);
  zz_c_7_1 <= pkg_extract(io_b,6);
  zz_c_8 <= pkg_extract(io_a,7);
  zz_c_8_1 <= pkg_extract(io_b,7);
end arch;

