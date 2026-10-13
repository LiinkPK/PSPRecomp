/* Entry 0x08873F80 | file offset 0x00070F58 | FUN_08873f80 | bytes 348 */

void FUN_08873f80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x220) + -1;
  iVar5 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    iVar4 = param_1;
    do {
      if ((*(float *)(iVar4 + 0x30) <= *(float *)(param_1 + 0x224)) &&
         (*(float *)(param_1 + 0x224) < *(float *)(iVar4 + 0x50))) {
        iVar5 = iVar4 + 0x20;
        iVar3 = iVar4 + 0x40;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x20;
    } while (iVar2 < iVar1);
  }
  if (iVar5 != 0) {
    FUN_089a39ec((*(float *)(param_1 + 0x224) - *(float *)(iVar5 + 0x10)) /
                 (*(float *)(iVar3 + 0x10) - *(float *)(iVar5 + 0x10)),param_1 + 0x10,iVar5);
    fVar7 = *(float *)(param_1 + 0x224);
    if (((*(float *)(param_1 + 0x228) < *(float *)(iVar5 + 0x10)) &&
        (*(float *)(iVar5 + 0x10) <= fVar7)) && (*(code **)(iVar5 + 0x14) != (code *)0x0)) {
      (**(code **)(iVar5 + 0x14))(*(undefined4 *)(iVar5 + 0x18));
      fVar7 = *(float *)(param_1 + 0x224);
    }
    *(float *)(param_1 + 0x228) = fVar7;
    fVar6 = DAT_089d5eac;
    if (*(char *)(param_1 + 0x238) != '\x01') {
      fVar6 = *(float *)(DAT_089d69e0 + 0x18);
    }
    *(float *)(param_1 + 0x224) = fVar7 + fVar6;
    if (*(float *)(param_1 + 0x22c) <= fVar7 + fVar6) {
      *(undefined4 *)(param_1 + 0x234) = 2;
    }
  }
  return;
}

