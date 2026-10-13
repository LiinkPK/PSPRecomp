/* Entry 0x088E7188 | file offset 0x000E4160 | FUN_088e7188 | bytes 400 */

void FUN_088e7188(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_30 [16];
  
  if ((char)param_1[7] != '\0') {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      fVar4 = (float)param_1[6] +
              ((float)param_1[5] * DAT_089d5eac) / (*(float *)param_1[4] - *(float *)param_1[3]);
      param_1[6] = (int)fVar4;
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      else if (1.0 < fVar4) {
        fVar4 = 1.0;
      }
      param_1[6] = (int)fVar4;
    }
    else {
      if (param_1[2] == 0) {
        FUN_089a38e0(auStack_30,param_1[1],iVar1);
        fVar4 = (float)FUN_089a3bf8(auStack_30);
        fVar3 = (float)param_1[6];
        fVar2 = (float)param_1[5] * DAT_089d5eac;
      }
      else {
        FUN_089a38e0(auStack_30,param_1[1],iVar1);
        fVar4 = (float)FUN_089a3bf8(auStack_30);
        FUN_089a38e0(auStack_30,param_1[2],param_1[1]);
        fVar2 = (float)FUN_089a3bf8(auStack_30);
        fVar4 = fVar4 + fVar2;
        fVar3 = (float)param_1[6];
        fVar2 = (float)param_1[5] * DAT_089d5eac;
      }
      fVar3 = fVar3 + fVar2 / fVar4;
      param_1[6] = (int)fVar3;
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      else if (1.0 < fVar3) {
        fVar3 = 1.0;
      }
      param_1[6] = (int)fVar3;
    }
  }
  return;
}

