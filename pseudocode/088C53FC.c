/* Entry 0x088C53FC | file offset 0x000C23D4 | FUN_088c53fc | bytes 192 */

bool FUN_088c53fc(uint *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0xffffffff) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_088c7f78(param_2);
    if (iVar2 == 1) {
      bVar1 = (*param_1 & 2) == 0;
    }
    else if ((int)param_2 < 0x400) {
      if ((int)param_2 < 0) {
        uVar3 = -(-param_2 & 0x1f);
      }
      else {
        uVar3 = param_2 & 0x1f;
      }
      bVar1 = (param_1[((int)(param_2 + ((uint)((int)param_2 >> 5) >> 0x1b)) >> 5) + 1] &
              1 << (uVar3 & 0x1f)) == 0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

