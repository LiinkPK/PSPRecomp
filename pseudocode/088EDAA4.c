/* Entry 0x088EDAA4 | file offset 0x000EAA7C | FUN_088edaa4 | bytes 216 */

int FUN_088edaa4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if ((*(uint *)(DAT_089d7f00 + 0x144) & 0x80) == 0) {
    iVar1 = sceIoRead(*(undefined4 *)(DAT_089d7f00 + 0x14c),param_1,param_2 << 0xb);
  }
  else {
    iVar1 = sceIoRead(*(undefined4 *)(DAT_089d7f00 + 0x14c),param_1,param_2);
  }
  if (iVar1 < 0) {
    if (iVar1 == -0x7fdefffd) {
      param_2 = 0;
    }
    else {
      param_2 = -1;
    }
  }
  else if ((iVar1 != 0) && (param_2 = iVar1, (*(uint *)(DAT_089d7f00 + 0x144) & 0x80) == 0)) {
    param_2 = (int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x15)) >> 0xb;
  }
  return param_2;
}

