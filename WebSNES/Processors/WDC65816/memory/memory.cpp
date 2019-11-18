#include <memory>

MemoryBus membus;

auto MemoryBus::read(uint16 addr) -> uint8 {
    uint8 data;
    /*TODO: update once IO for PPU and CPu have been 
            implemented and reading carts is working
            example implementation should look something 
            like:
            uint8 data = cartridge.readPROGRAM(addr);
            if(addr <= 0x1fff) data = CPU.readRAM(addr);
            else if(addr <= 0x4017) data = CPU.readIO(addr);
            else if(addr <= 0x3fff) data = ppu.readIO(addr);
          */

    return data;
}

auto MemoryBus::write(uint16 addr, uint8 data) -> void {
    
    if(addr <= 0x1fff) return CPU.writeRAM(addr, data);
  /*TODO: update once IO for PPU and CPu have been 
          implemented and reading carts is working
          example implementation should look something 
          like:
          
          cartridge.writePROGRAM(addr, data);
          if(addr <= 0x3fff) return ppu.writeIO(addr, data);
          if(addr <= 0x4017) return cpu.writeIO(addr, data);
          */       
  //
}
