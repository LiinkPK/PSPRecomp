/* Entry 0x08913A0C | file offset 0x001109E4 | FUN_08913a0c | bytes 332 */

void FUN_08913a0c(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0xa0;
  if (param_2 == '\0') {
    uVar1 = FUN_088d75f0(iVar3);
    *(undefined4 *)(param_1 + 0x56c) = uVar1;
    iVar2 = FUN_088d75f0(iVar3);
    if (iVar2 < 0x2f) {
      if ((0x2c < iVar2) && (0x2d < iVar2)) {
        FUN_08916584(param_1,0x3e);
        return;
      }
    }
    else {
      if (iVar2 < 0x30) {
        *(undefined1 *)(param_1 + 0x7e1) = 1;
        FUN_088d7574(iVar3);
        FUN_088cdb04(param_1 + 0x3c0);
        iVar3 = FUN_0891705c(0xffffffff);
        FUN_0892f5f8(param_1 + 0x418,iVar3 + 0x25c);
        uVar1 = FUN_08911664(DAT_089d83a8);
        FUN_0892f600(param_1 + 0x418,uVar1,2,8,FUN_08917ccc);
        return;
      }
      if (iVar2 < 0x31) {
        FUN_08916494(param_1);
        return;
      }
    }
  }
  FUN_088d7574(iVar3);
  FUN_088cdb04(param_1 + 0x3c0);
  FUN_088ce7f4(param_1 + 0x404);
  FUN_08913b58(param_1,1);
  FUN_08914bc8(param_1);
  FUN_088a18b0(DAT_089d6c88,100,0x3c);
  return;
}

