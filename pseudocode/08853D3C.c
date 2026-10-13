/* Entry 0x08853D3C | file offset 0x00050D14 | FUN_08853d3c | bytes 232 */

void FUN_08853d3c(float param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  float fVar2;
  
  if ((param_4 != 0) && (0.95 <= *(float *)(param_4 + 4))) {
    fVar2 = param_1 * 0.7 + 0.5;
    iVar1 = func_0x08a50154();
    if ((iVar1 != 0) &&
       (iVar1 = FUN_088a9de8(*(undefined4 *)(*(int *)(iVar1 + 0x390) + 0x5c),0x79,iVar1 + 0x4c8,0,0)
       , iVar1 != 0)) {
      FUN_088a7284(*param_3,param_3[1],param_3[2],iVar1);
      FUN_088a72e8(fVar2,fVar2,fVar2,iVar1);
    }
  }
  return;
}

