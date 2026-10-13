/* Entry 0x088E0590 | file offset 0x000DD568 | FUN_088e0590 | bytes 272 */

undefined4 FUN_088e0590(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((int)*(short *)(param_1 + 0x17ac) == *(int *)(*(int *)(param_1 + 8) + 0x488)) {
    return 1;
  }
  if ((*(char *)(param_1 + 0x17ae) == '\0') &&
     (iVar1 = FUN_089359e8(*(int *)(param_1 + 8) + *(short *)(param_1 + 0x17ac) * 0x40 + 0x48c),
     iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x17ae) = 1;
    iVar1 = *(int *)(param_1 + 8) + *(short *)(param_1 + 0x17ac) * 0x40 + 0x48c;
    if ((*(ushort *)(*(int *)(param_1 + 8) + 6) & 0x20) != 0) {
      iVar2 = FUN_08935c14(iVar1,"text/");
      iVar1 = *(int *)(param_1 + 8) + *(short *)(param_1 + 0x17ac) * 0x40 + 0x48c;
      if (iVar2 != 0) {
        uVar3 = FUN_08867ac8();
        FUN_088fe850(uVar3,*(undefined4 *)(param_1 + 0x162c),*(undefined4 *)(param_1 + 0x1630),
                     FUN_088e0714,param_1,0);
        return 0;
      }
    }
    FUN_088fe850(iVar1,*(undefined4 *)(param_1 + 0x162c),*(undefined4 *)(param_1 + 0x1630),
                 FUN_088e0714,param_1,0);
  }
  return 0;
}

