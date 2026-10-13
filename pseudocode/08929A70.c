/* Entry 0x08929A70 | file offset 0x00126A48 | FUN_08929a70 | bytes 140 */

void FUN_08929a70(uint *param_1,undefined4 param_2)

{
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  FUN_08928470(&local_28);
  if ((local_28 & local_24) == 0xffffffff) {
    FUN_08929430(&local_20,param_2);
    *param_1 = local_20;
    param_1[1] = local_1c;
  }
  else {
    *param_1 = local_28;
    param_1[1] = local_24;
  }
  return;
}

