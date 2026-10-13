/* Entry 0x088121B0 | file offset 0x0000F188 | FUN_088121b0 | bytes 336 */

bool FUN_088121b0(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_089a3528(&local_2c,param_2 + 0x10,param_1 + 0x10);
  local_38 = local_2c;
  local_34 = local_28;
  local_30 = local_24;
  local_50 = local_2c;
  local_4c = local_28;
  local_48 = local_24;
  FUN_089a34c0(auStack_44,&local_50);
  fVar2 = (float)FUN_089a4500(local_40);
  fVar3 = *(float *)(param_2 + 8);
  if (fVar2 < *(float *)(param_1 + 8) + fVar3) {
    if (fVar3 < fVar2) {
      fVar2 = (fVar2 - fVar3) / *(float *)(param_1 + 8);
      fVar2 = (float)FUN_089a2c68(1.0 - fVar2 * fVar2);
      fVar2 = fVar2 * *(float *)(param_1 + 4) + *(float *)(param_2 + 4);
      fVar2 = fVar2 * fVar2;
    }
    else {
      fVar2 = *(float *)(param_1 + 4) + *(float *)(param_2 + 4);
      fVar2 = fVar2 * fVar2;
    }
    local_40 = 0;
    fVar3 = (float)FUN_089a3718(auStack_44,auStack_44);
    bVar1 = fVar3 < fVar2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

