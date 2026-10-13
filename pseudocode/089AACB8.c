/* Entry 0x089AACB8 | file offset 0x001A7C90 | FUN_089aacb8 | bytes 232 */

int FUN_089aacb8(undefined4 param_1)

{
  int iVar1;
  uint local_d0;
  uint local_cc;
  undefined1 auStack_70 [4];
  uint local_6c;
  
  iVar1 = sceIoGetstat(param_1,&local_d0);
  if (iVar1 == 0) {
    FUN_089ab344(auStack_70,&local_d0,0x58);
    if ((local_cc & 1) != 0) {
      local_6c = local_6c & 0xfffffffe;
      iVar1 = FUN_089a5e64(param_1,auStack_70,2);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    if ((local_d0 & 0x1000) != 0) {
      return 0;
    }
    iVar1 = FUN_089a5af4(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else if (iVar1 != -0x7ffefffe) {
    return iVar1;
  }
  iVar1 = FUN_089a5d68(param_1,0);
  return iVar1;
}

