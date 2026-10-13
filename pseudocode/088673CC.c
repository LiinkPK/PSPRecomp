/* Entry 0x088673CC | file offset 0x000643A4 | FUN_088673cc | bytes 224 */

int FUN_088673cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar1 = FUN_08867780();
    iVar2 = FUN_08867780(param_1,0x14);
    for (piVar3 = *(int **)(param_1 + 0xc); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[4]) {
      if ((*piVar3 == 0) && (iVar1 <= piVar3[1])) {
        iVar5 = *(int *)(param_1 + 0x10);
        *piVar3 = iVar5;
        *(int *)(param_1 + 0x10) = iVar5 + 1;
        iVar5 = piVar3[1] - (iVar2 + iVar1);
        if (0 < iVar5) {
          puVar4 = (undefined4 *)((int)piVar3 + iVar1 + iVar2);
          *puVar4 = 0;
          puVar4[1] = iVar5;
          puVar4[2] = 0;
          puVar4[3] = piVar3;
          iVar2 = piVar3[4];
          puVar4[4] = iVar2;
          if (iVar2 != 0) {
            *(undefined4 **)(puVar4[4] + 0xc) = puVar4;
          }
          piVar3[1] = iVar1;
          piVar3[4] = (int)puVar4;
        }
        return *piVar3;
      }
    }
  }
  return 0;
}

