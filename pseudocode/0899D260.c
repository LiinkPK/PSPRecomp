/* Entry 0x0899D260 | file offset 0x0019A238 | FUN_0899d260 | bytes 152 */

int FUN_0899d260(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = 0;
  if (param_2 != 0) {
    FUN_08935524(param_1,param_2,*(undefined4 *)(param_2 + 0x20));
    iVar3 = *(int *)(param_2 + 0x20);
    iVar4 = (uint)*(ushort *)(param_2 + 0x2a) * (uint)*(ushort *)(param_2 + 0x2e);
    piVar5 = (int *)(param_1 + *(int *)(param_1 + 0x18));
    iVar2 = param_1;
    if (0 < iVar4) {
      iVar1 = *piVar5;
      while( true ) {
        iVar4 = iVar4 + -1;
        if (param_2 <= iVar1 && iVar1 < param_2 + iVar3) {
          *piVar5 = iVar1 + (param_1 - param_2);
        }
        if (iVar4 < 1) break;
        iVar1 = piVar5[1];
        piVar5 = piVar5 + 1;
      }
    }
  }
  return iVar2;
}

