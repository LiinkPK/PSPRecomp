/* Entry 0x08933CBC | file offset 0x00130C94 | FUN_08933cbc | bytes 244 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08933cbc(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x134);
  if ((uVar1 < 6) && (uVar1 != 1)) {
    if (uVar1 == 2) {
      func_0x089de910(_DAT_089e09c0,0);
      func_0x089de94c(_DAT_089e09c0);
    }
    else if (uVar1 != 3) {
      if (uVar1 == 4) {
        func_0x08abc158(_DAT_08ac4560,1,2,1);
        func_0x08abc1d0(_DAT_08ac4560,0,0);
      }
      else if (uVar1 == 5) {
        func_0x08abc158(_DAT_08ac4560,1,2,0);
        func_0x08abc1d0(_DAT_08ac4560,0,0);
      }
      else {
        func_0x089debdc(_DAT_089e330c);
      }
    }
  }
  return;
}

