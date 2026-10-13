/* Entry 0x0887A800 | file offset 0x000777D8 | FUN_0887a800 | bytes 152 */

int FUN_0887a800(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if ((-1 < param_2) && (param_2 < param_3)) {
    iVar1 = FUN_0887a8f0(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_0887a918(param_1);
      if (iVar1 == 0) {
        iVar1 = (uint)*(ushort *)(param_1 + 2 + param_2 * 2) * 2;
      }
      else {
        iVar1 = (uint)*(ushort *)(param_1 + 8 + param_2 * 2) * 2;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 8 + param_2 * 4) << 2;
    }
  }
  return iVar1;
}

