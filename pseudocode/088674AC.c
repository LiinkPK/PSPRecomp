/* Entry 0x088674AC | file offset 0x00064484 | FUN_088674ac | bytes 228 */

void FUN_088674ac(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar1 = FUN_08867780(param_1,0x14);
    puVar2 = (undefined4 *)FUN_0886774c(param_1,param_2);
    if (puVar2 != (undefined4 *)0x0) {
      piVar4 = (int *)puVar2[4];
      piVar3 = (int *)puVar2[3];
      *puVar2 = 0;
      puVar2[2] = 0;
      if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
        puVar2[1] = iVar1 + piVar4[1] + puVar2[1];
        iVar5 = piVar4[4];
        puVar2[4] = iVar5;
        if (iVar5 != 0) {
          *(undefined4 **)(piVar4[4] + 0xc) = puVar2;
        }
      }
      if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
        piVar3[1] = iVar1 + puVar2[1] + piVar3[1];
        iVar1 = puVar2[4];
        piVar3[4] = iVar1;
        if (iVar1 != 0) {
          *(int **)(puVar2[4] + 0xc) = piVar3;
        }
      }
    }
  }
  return;
}

