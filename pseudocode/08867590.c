/* Entry 0x08867590 | file offset 0x00064568 | FUN_08867590 | bytes 292 */

void FUN_08867590(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  iVar1 = FUN_08867780(param_1,0x14);
  for (piVar2 = *(int **)(param_1 + 0xc); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[4]) {
    piVar5 = (int *)piVar2[3];
    if (((piVar5 != (int *)0x0) && (*piVar5 == 0)) && (piVar2[2] == 0)) {
      *piVar5 = *piVar2;
      iVar3 = piVar2[1];
      piVar5[2] = 0;
      piVar5[1] = iVar3;
      iVar3 = piVar2[4];
      piVar5[4] = iVar3;
      if (iVar3 != 0) {
        *(int **)(iVar3 + 0xc) = piVar5;
      }
      FUN_08935564((int)piVar5 + iVar1,(int)piVar2 + iVar1,piVar2[1]);
      puVar6 = (undefined4 *)((int)piVar5 + piVar5[1] + iVar1);
      iVar3 = piVar5[4];
      *puVar6 = 0;
      puVar6[1] = iVar3 - ((int)puVar6 + iVar1);
      puVar6[2] = 0;
      puVar6[3] = piVar5;
      puVar6[4] = piVar5[4];
      piVar5[4] = (int)puVar6;
      if (puVar6[4] != 0) {
        *(undefined4 **)(puVar6[4] + 0xc) = puVar6;
      }
      piVar4 = (int *)puVar6[4];
      piVar2 = piVar5;
      if ((piVar4 != (int *)0x0) && (*piVar4 == 0)) {
        puVar6[1] = iVar1 + piVar4[1] + puVar6[1];
        iVar3 = piVar4[4];
        puVar6[4] = iVar3;
        if (iVar3 != 0) {
          *(undefined4 **)(iVar3 + 0xc) = puVar6;
        }
      }
    }
  }
  return;
}

