/* Entry 0x088ADDE8 | file offset 0x000AADC0 | FUN_088adde8 | bytes 168 */

void FUN_088adde8(undefined4 param_1,ushort *param_2,undefined4 param_3)

{
  undefined *puVar1;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24 [3];
  
  FUN_08867ca0(&local_30);
  local_24[local_30] = (uint)*param_2;
  puVar1 = (&PTR_s__04d__02d__02d__d__02d__02d_089d6ddc)[local_30];
  local_24[local_2c] = (uint)param_2[1];
  local_24[local_28] = (uint)param_2[2];
  FUN_0893476c(param_3,puVar1,local_24[0],local_24[1],local_24[2],param_2[3],param_2[4],param_2[5]);
  FUN_08867da8(param_3);
  return;
}

