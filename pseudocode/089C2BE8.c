/* Entry 0x089C2BE8 | file offset 0x001BFBC0 | FUN_089c2be8 | bytes 240 */

void FUN_089c2be8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_3 + 4) == -1) {
    FUN_089a03dc(9);
  }
  else {
    FUN_089a0384(9);
    FUN_08973508(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),param_2,
                 *(undefined4 *)(param_3 + 4));
    FUN_08973400(param_2,*(undefined4 *)(param_3 + 4),5,1,0,0);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      piVar3 = *(int **)(param_1 + 8);
      iVar1 = 0;
      do {
        if (*(int *)(param_3 + 4) == *piVar3) {
          FUN_089734b8(param_2,*(int *)(param_3 + 4),
                       *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar1));
          return;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
        piVar3 = piVar3 + 1;
      } while (iVar2 < *(int *)(param_1 + 4));
    }
  }
  return;
}

