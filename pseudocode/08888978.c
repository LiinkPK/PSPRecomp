/* Entry 0x08888978 | file offset 0x00085950 | FUN_08888978 | bytes 328 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08888978(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_37;
  
  FUN_08886c88(DAT_089d69f8);
  func_0x08b0de14(_DAT_08b11e28);
  func_0x08b158c8();
  iVar1 = func_0x08b1dbd0(_DAT_08b1fe60);
  if (iVar1 == 1) {
    func_0x08b0ddc8(_DAT_08b11e28,1);
    *(undefined4 *)(param_1 + 0x48) = 3;
  }
  else if (*(int *)(_DAT_08b11e28 + 0x94) != 1) {
    iVar3 = 0;
    iVar1 = param_1;
    do {
      iVar2 = *(int *)(iVar1 + 0x38);
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 0x380) = *(uint *)(iVar2 + 0x380) & 0xfffffffd;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar3 < 2);
    func_0x08abb4bc(_DAT_08abbdf8);
    *(undefined4 *)(param_1 + 0x48) = 3;
    if (*(int *)(param_1 + 0x4c) == 5) {
      *_DAT_08b212e8 = 1;
      iVar1 = *(int *)(param_1 + 0x3c);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x3c);
    }
    if ((*(byte *)(iVar1 + 0x5b7) & 0x10) != 0) {
      func_0x089eb798(&local_40);
      local_40 = 0;
      local_3c = 0x9b;
      local_37 = 1;
      FUN_0888ace4(&local_40);
      func_0x089eb7d0(&local_40,2);
    }
  }
  return;
}

