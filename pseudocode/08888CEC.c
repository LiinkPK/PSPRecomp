/* Entry 0x08888CEC | file offset 0x00085CC4 | FUN_08888cec | bytes 576 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08888cec(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  func_0x08a3e844(_DAT_08a405e0);
  FUN_0889f264(DAT_089d6c30,0);
  FUN_088a2780();
  DAT_089d6c98 = 1;
  iVar2 = *(int *)(*(int *)(param_1 + 0x7c8) + 0xbdb8);
  if ((iVar2 == 1) || (bVar1 = false, iVar2 == 2)) {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_088c9938();
  }
  if ((*(int *)(param_1 + 0x4c) == 5) && (*(char *)(param_1 + 0x69) == '\x01')) {
    FUN_08906f6c(DAT_089d8364);
    FUN_0890e948();
  }
  if (*(char *)(DAT_089d6a00 + 0x18) == '\x01') {
    if (*(int *)(param_1 + 0x50) == 3) {
      iVar2 = FUN_088878b4();
      if (iVar2 == 0) {
        FUN_088876b0(DAT_089d6a00);
      }
    }
    else {
      FUN_088876a8();
    }
  }
  func_0x08b015dc(_DAT_08b04ba0);
  func_0x08a2200c(_DAT_08a22ab0);
  func_0x089dd534(*(undefined4 *)(param_1 + 0x7a4),3);
  func_0x08b27a9c(_DAT_08b28588);
  func_0x08b18590(_DAT_08b18830);
  func_0x08b2ce04(_DAT_08b2d2b8);
  func_0x08b21778(_DAT_08b23058);
  iVar2 = 0;
  iVar3 = param_1 + 0x754;
  do {
    FUN_08890b9c(iVar3);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x28;
  } while (iVar2 < 2);
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  func_0x08b532ac(_DAT_08b54330);
  FUN_08888550(param_1);
  FUN_08841ef8();
  func_0x08ad0a94();
  FUN_0884c35c(DAT_089d4d80);
  *(undefined1 *)(DAT_089d6ac8 + 0x6b2) = 0;
  FUN_088a95e4(DAT_089d6dc8);
  FUN_08886934(DAT_089d69f8);
  FUN_08886aa8(DAT_089d69f8);
  func_0x08b0ddc8(_DAT_08b11e28,0);
  func_0x08b0db40(_DAT_08b11e28);
  func_0x08b0dad8(_DAT_08b11e28);
  func_0x08b05d34(_DAT_08b0cf20);
  func_0x08b05c94(_DAT_08b0cf20);
  FUN_0888fd5c();
  *(undefined4 *)(param_1 + 0x48) = 8;
  return;
}

