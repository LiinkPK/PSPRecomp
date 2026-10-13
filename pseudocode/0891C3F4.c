/* Entry 0x0891C3F4 | file offset 0x001193CC | FUN_0891c3f4 | bytes 104 */

void FUN_0891c3f4(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = param_1;
  do {
    uVar2 = FUN_08889efc(iVar4);
    *(undefined4 *)(iVar3 + 0x2a78) = uVar2;
    uVar1 = FUN_08889f14(iVar4);
    *(undefined1 *)(param_1 + iVar4 + 0x2a84) = uVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 3);
  return;
}

