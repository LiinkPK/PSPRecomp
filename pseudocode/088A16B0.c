/* Entry 0x088A16B0 | file offset 0x0009E688 | FUN_088a16b0 | bytes 168 */

int FUN_088a16b0(undefined4 param_1,float param_2,int param_3,undefined4 param_4,int param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)FUN_088a1c38(param_3 + param_5 * 0x10 + 0x7c);
  iVar1 = FUN_089918c0(param_1,param_4,(int)(((param_2 * fVar2) / 100.0) * 4096.0),param_6,param_7);
  if (iVar1 == 0x100) {
    iVar1 = -1;
  }
  return iVar1;
}

