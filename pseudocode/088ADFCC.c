/* Entry 0x088ADFCC | file offset 0x000AAFA4 | FUN_088adfcc | bytes 68 */

void FUN_088adfcc(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  
  sceRtcGetCurrentClockLocalTime(&local_20);
  uVar1 = FUN_088adfa8(local_20,local_1e,local_1c,local_1a,local_18);
  *param_1 = uVar1;
  return;
}

