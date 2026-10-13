/* Entry 0x0898B0FC | file offset 0x001880D4 | FUN_0898b0fc | bytes 456 */

void FUN_0898b0fc(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  FUN_0898b2c4();
  iVar1 = param_1 + 0x50;
  iVar2 = param_1 + 0x40;
  if (*(char *)(param_3 + 0xb7) == '\0') {
    FUN_0898ab80(param_1,param_3,param_2[2],param_2[3],param_2[4],param_2[5],param_1 + 0x60);
    FUN_0898ab80(param_1,param_3,*param_2,param_2[2],param_2[4],param_2[5],iVar1,iVar2);
    FUN_0898ab80(param_1,param_3,param_2[3],param_2[1],param_2[4],param_2[5],iVar2,iVar1);
    FUN_0898ade8(param_1,param_2[5],3);
  }
  else {
    fVar3 = ((*(float *)(param_3 + 0x3c) - *(float *)(param_3 + 0x40)) * 0.5) /
            *(float *)(param_3 + 0x3c);
    FUN_0898c2f0(fVar3,1.0 - fVar3,param_1,param_3,param_2[2],param_2[3],param_2[4],param_2[5],
                 param_1 + 0x60);
    FUN_0898c2f0(0,fVar3,param_1,param_3,*param_2,param_2[2],param_2[4],param_2[5],iVar1,iVar2);
    FUN_0898c2f0(1.0 - fVar3,0x3f800000,param_1,param_3,param_2[3],param_2[1],param_2[4],param_2[5],
                 iVar2,iVar1);
    FUN_0898ae1c(param_1,param_2[5],3);
  }
  return;
}

