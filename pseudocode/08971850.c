/* Entry 0x08971850 | file offset 0x0016E828 | FUN_08971850 | bytes 144 */

void FUN_08971850(float *param_1)

{
  int iVar1;
  float fVar2;
  undefined4 local_10;
  
  iVar1 = (int)param_1[3] * 2;
  if (iVar1 < 0x100) {
    fVar2 = *param_1;
  }
  else {
    iVar1 = 0xff;
    fVar2 = *param_1;
  }
  local_10._3_1_ = (undefined1)iVar1;
  local_10._0_3_ = CONCAT12((char)(int)param_1[2],CONCAT11((char)(int)param_1[1],(char)(int)fVar2));
  FUN_0899ffc8(1);
  FUN_089a0384(10);
  FUN_089a0c20(local_10);
  FUN_089a0d84(0,1,local_10);
  return;
}

