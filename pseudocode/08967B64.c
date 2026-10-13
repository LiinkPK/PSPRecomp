/* Entry 0x08967B64 | file offset 0x00164B3C | FUN_08967b64 | bytes 308 */

void FUN_08967b64(undefined4 param_1,int param_2,float *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x8c) + 0x1c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x88) + 0x50;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x54);
  }
  FUN_08967868(&local_60,iVar1,*(undefined4 *)(*(int *)(param_2 + 0x8c) + 0x50));
  fVar2 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  *param_3 = fVar2 * local_60 + fVar3 * local_50 + fVar4 * local_40 + local_30;
  param_3[1] = fVar2 * local_5c + fVar3 * local_4c + fVar4 * local_3c + local_2c;
  param_3[2] = fVar2 * local_58 + fVar3 * local_48 + fVar4 * local_38 + local_28;
  param_3[3] = fVar2 * local_54 + fVar3 * local_44 + fVar4 * local_34 + local_24;
  return;
}

