/* Entry 0x088A14D0 | file offset 0x0009E4A8 | FUN_088a14d0 | bytes 112 */

bool FUN_088a14d0(float param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)FUN_088a1c38(param_2 + param_4 * 0x10 + 0x7c);
  iVar1 = FUN_08991660(param_3,7,(int)(param_1 * fVar2),param_5 << 9);
  return iVar1 != -1;
}

