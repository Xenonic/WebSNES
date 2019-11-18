

auto CPU::readRAM(uint11 addr) -> uint8 {
      return ram[addr];
}
auto CPU::writeRAM(uint11 addr, uint8 data) -> void {
  ram[addr] = data;
}