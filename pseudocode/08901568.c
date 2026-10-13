/* Entry 0x08901568 | file offset 0x000FE540 | FUN_08901568 | bytes 172 */

int FUN_08901568(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_a0 [35];
  
  puVar3 = local_a0;
  iVar4 = 0;
  iVar1 = FUN_08901400(local_a0,0x23,param_3,param_4);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (param_2 <= iVar4) {
        return iVar4;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 1;
      *param_1 = (int)*(short *)*puVar3;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < iVar1);
  }
  return iVar4;
}

