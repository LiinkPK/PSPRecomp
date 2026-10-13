/* Entry 0x08916410 | file offset 0x001133E8 | FUN_08916410 | bytes 132 */

void FUN_08916410(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(DAT_089d726c + 0x18) & 0x100) == 0) {
    FUN_0892a13c(param_1 + 0x574);
  }
  else {
    iVar1 = FUN_0891705c(0xffffffff);
    uVar2 = FUN_08911664(DAT_089d83a8);
    FUN_08931c28(param_1 + 0x574,iVar1 + 0x25c,uVar2,8);
  }
  return;
}

