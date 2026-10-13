/* Entry 0x088A17C4 | file offset 0x0009E79C | FUN_088a17c4 | bytes 120 */

void FUN_088a17c4(undefined4 param_1,float param_2,int param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  
  fVar1 = (float)FUN_088a1c38(param_3 + param_5 * 0x10 + 0x7c);
  FUN_08990ac0(param_1,param_4,(int)(((param_2 * fVar1) / 100.0) * 4096.0));
  return;
}

