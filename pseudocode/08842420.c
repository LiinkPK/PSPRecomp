/* Entry 0x08842420 | file offset 0x0003F3F8 | FUN_08842420 | bytes 48 */

void FUN_08842420(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  *(undefined1 *)(param_1 + 0x24) = param_5;
  FUN_08842774(param_1,param_1 + 0x18,param_3,param_4,"OBJ_SOUND:%s [VOICE SCD]",param_2);
  return;
}

