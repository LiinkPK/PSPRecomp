/* Entry 0x088737B0 | file offset 0x00070788 | FUN_088737b0 | bytes 208 */

bool FUN_088737b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)FUN_089a3718(param_3,param_1 + 0xc);
  if (fVar1 != 0.0) {
    fVar2 = (float)FUN_089a3718(param_3,param_1);
    fVar3 = (float)FUN_089a3718(param_3,param_2);
    FUN_089a3680((fVar3 - fVar2) / fVar1,param_4,param_1 + 0xc);
    FUN_089a34f4(param_4,param_4,param_1);
  }
  return fVar1 != 0.0;
}

