/* Entry 0x088A6AA4 | file offset 0x000A3A7C | FUN_088a6aa4 | bytes 460 */

void FUN_088a6aa4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = FUN_088a751c();
  if (iVar1 == 1) {
    FUN_088a478c(*(undefined4 *)(param_1 + 0xcc),0);
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    iVar1 = 0;
    piVar4 = (int *)(param_1 + 0x1fc);
    iVar5 = 0;
    do {
      if (*piVar4 == 0) {
        piVar6 = (int *)(*(int *)(param_1 + 0xc4) + iVar5);
        if (((piVar6[4] & 4U) != 0) &&
           (puVar2 = (undefined4 *)FUN_088a24d4(1,*piVar6 + piVar6[1],1,0),
           puVar2 != (undefined4 *)0x0)) {
          iVar3 = piVar6[3];
          puVar2[0x11] = &LAB_088a8040;
          puVar2[0x12] = param_1;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[0x10] = (float)iVar3;
          puVar2[5] = 0;
          puVar2[0xd] = puVar2[0xd] & 0xfffffdff;
          uVar7 = *(undefined4 *)(param_1 + 500);
          uVar8 = *(undefined4 *)(param_1 + 0x1f8);
          *puVar2 = *(undefined4 *)(param_1 + 0x1f0);
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[0xd] = puVar2[0xd] & 0xfffffdff;
          if (*(undefined4 **)(param_1 + 0xd0) != (undefined4 *)0x0) {
            puVar2[0x15] = **(undefined4 **)(param_1 + 0xd0);
          }
          *piVar4 = (int)puVar2;
          piVar4[1] = (int)piVar6;
        }
      }
      else if (((*(uint *)(piVar4[1] + 0x10) & 2) != 0) || (*(int *)(*piVar4 + 0x30) != 1)) {
        FUN_088a1e44(0);
        iVar3 = *piVar4;
        *(undefined4 *)(iVar3 + 0x44) = 0;
        *(undefined4 *)(iVar3 + 0x48) = 0;
        *(undefined4 *)(*piVar4 + 0x54) = 0;
        *piVar4 = 0;
        piVar4[1] = 0;
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 2;
      iVar5 = iVar5 + 0x14;
    } while (iVar1 < 0x10);
  }
  return;
}

