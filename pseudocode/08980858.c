/* Entry 0x08980858 | file offset 0x0017D830 | FUN_08980858 | bytes 652 */

void FUN_08980858(float param_1,undefined4 param_2,int param_3,int *param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  
  fVar6 = param_1;
  if (param_1 < 0.0) {
    fVar6 = -param_1;
  }
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  else if (100.0 < fVar6) {
    fVar6 = 100.0;
  }
  uVar2 = 0;
  uVar3 = 0;
  if (param_4[1] != 0) {
    do {
      if (*(int *)(*param_4 + uVar2 * 0x10 + 0xc) != 0) {
        piVar1 = (int *)(*param_4 + uVar2 * 0x10);
        iVar4 = (int)(((float)*(int *)(*param_4 + uVar2 * 0x10) * fVar6) / 100.0) + -1;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        else if (*piVar1 < iVar4) {
          iVar4 = *piVar1;
        }
        uVar3 = uVar2;
        if (param_1 < 0.0) {
          puVar5 = (undefined4 *)(param_5 + uVar2 * 4);
          FUN_08980ae4(param_2,param_3 + 0x10,iVar4,*param_4 + uVar2 * 0x10,*puVar5,1);
          FUN_08980e08(param_2,param_3,iVar4,*param_4 + uVar2 * 0x10,*puVar5,1);
        }
        else {
          puVar5 = (undefined4 *)(param_5 + uVar2 * 4);
          FUN_08980ae4(param_2,param_3 + 0x10,iVar4,*param_4 + uVar2 * 0x10,*puVar5,0);
          FUN_08980e08(param_2,param_3,iVar4,*param_4 + uVar2 * 0x10,*puVar5,0);
        }
        break;
      }
      *(undefined4 *)(param_5 + uVar2 * 4) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_4[1]);
  }
  if (uVar2 < (uint)param_4[1]) {
    do {
      if (*(int *)(*param_4 + uVar2 * 0x10 + 0xc) == 0) {
        *(undefined4 *)(param_5 + uVar2 * 4) = 0;
      }
      else {
        FUN_08935524(*(undefined4 *)(param_5 + uVar2 * 4),*(undefined4 *)(param_5 + uVar3 * 4),
                     *(undefined4 *)(*param_4 + 8));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_4[1]);
  }
  return;
}

