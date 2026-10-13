/* Entry 0x088C5534 | file offset 0x000C250C | FUN_088c5534 | bytes 120 */

bool FUN_088c5534(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  
  if ((int)param_2 < 0) {
    bVar1 = false;
  }
  else if ((int)param_2 < 0x40) {
    if ((int)param_2 < 0) {
      uVar2 = -(-param_2 & 0x1f);
    }
    else {
      uVar2 = param_2 & 0x1f;
    }
    bVar1 = (*(uint *)(param_1 + 0x104 +
                      ((int)(param_2 + ((uint)((int)param_2 >> 5) >> 0x1b)) >> 5) * 4) &
            1 << (uVar2 & 0x1f)) == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

