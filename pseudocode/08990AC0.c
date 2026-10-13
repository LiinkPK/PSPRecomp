/* Entry 0x08990AC0 | file offset 0x0018DA98 | FUN_08990ac0 | bytes 208 */

void FUN_08990ac0(float param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_20;
  float local_1c;
  
  local_1c = 0.0;
  local_20 = param_1;
  FUN_089912c8(&local_20,&local_1c);
  iVar1 = DAT_089da420 + param_2 * 0x3c;
  fVar2 = (float)*(int *)(iVar1 + 0x194) / 100.0;
  fVar3 = (float)param_3;
  iVar1 = (int)(fVar3 * ((float)*(int *)(iVar1 + 0x198) / 100.0) * fVar2);
  FUN_089a50e0(param_2,(int)(fVar3 * local_20 * fVar2),(int)(fVar3 * local_1c * fVar2),iVar1,iVar1);
  return;
}

