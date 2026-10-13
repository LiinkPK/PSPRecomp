/* Entry 0x08868128 | file offset 0x00065100 | FUN_08868128 | bytes 316 */

float FUN_08868128(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  float fVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [4];
  float local_2c;
  
  local_50 = *param_1;
  local_48 = param_1[2];
  local_4c = 0;
  local_40 = *param_2;
  local_44 = 0x3f800000;
  local_38 = param_2[2];
  local_3c = 0;
  local_34 = 0x3f800000;
  FUN_089a3bc8(&local_50,&local_50);
  FUN_089a3bc8(&local_40,&local_40);
  fVar1 = (float)FUN_089a3b10(&local_50,&local_40);
  if (1.0 <= fVar1) {
    fVar1 = 0.0;
  }
  else if (fVar1 <= -1.0) {
    fVar1 = 3.1415927;
  }
  else {
    fVar1 = (float)FUN_089a4520(fVar1);
  }
  FUN_089a3b30(auStack_30,&local_50,&local_40);
  if (local_2c < 0.0) {
    if (param_3 == '\0') {
      fVar1 = -fVar1;
    }
    else {
      fVar1 = 6.2831855 - fVar1;
    }
  }
  return fVar1;
}

