/* Entry 0x08907780 | file offset 0x00104758 | FUN_08907780 | bytes 324 */

void FUN_08907780(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 local_70 [96];
  
  puVar7 = local_70;
  iVar4 = FUN_08903098(*param_1,param_1 + 0x599,FUN_08907e78,param_1);
  if (iVar4 != 1) {
    if (((int)param_1[0x5b6] < 0x32) && (*(char *)((int)param_1 + 0x16e5) == '\0')) {
      FUN_08993560(local_70,0x10,6,FUN_089057bc);
      iVar4 = param_1[0x201];
      iVar8 = 0;
      if (0 < iVar4) {
        puVar6 = param_1 + 1;
        do {
          uVar1 = *(undefined1 *)((int)puVar6 + 1);
          uVar2 = *(undefined1 *)((int)puVar6 + 2);
          *puVar7 = *(undefined1 *)puVar6;
          uVar3 = *(undefined1 *)((int)puVar6 + 3);
          puVar7[1] = uVar1;
          uVar1 = *(undefined1 *)(puVar6 + 1);
          puVar7[2] = uVar2;
          uVar2 = *(undefined1 *)((int)puVar6 + 5);
          puVar7[3] = uVar3;
          puVar7[4] = uVar1;
          puVar7[5] = uVar2;
          iVar4 = param_1[0x201];
          iVar8 = iVar8 + 1;
          puVar7 = puVar7 + 6;
          puVar6 = puVar6 + 0x20;
        } while (iVar8 < iVar4);
      }
      FUN_08906e08(param_1,param_1 + 0x599,local_70,iVar4,param_1[0x591]);
      param_1[0x5b6] = param_1[0x5b6] + 1;
    }
    else {
      piVar5 = (int *)param_1[0x598];
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x1c))((int)piVar5 + (int)*(short *)(*piVar5 + 0x18),1);
      }
      param_1[0x5b6] = 0;
      *(undefined1 *)((int)param_1 + 0x16e5) = 0;
      param_1[0x596] = 0;
    }
  }
  return;
}

