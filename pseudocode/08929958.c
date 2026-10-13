/* Entry 0x08929958 | file offset 0x00126930 | FUN_08929958 | bytes 224 */

void FUN_08929958(uint *param_1,undefined4 param_2)

{
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  FUN_08928470(&local_28);
  if ((local_28 & local_24) == 0xffffffff) {
    FUN_0892850c(&local_20,param_2);
    if ((local_20 & local_1c) == 0xffffffff) {
      FUN_08929430(&local_18,param_2);
      *param_1 = local_18;
      param_1[1] = local_14;
    }
    else {
      *param_1 = local_20;
      param_1[1] = local_1c;
    }
  }
  else {
    *param_1 = local_28;
    param_1[1] = local_24;
  }
  return;
}

