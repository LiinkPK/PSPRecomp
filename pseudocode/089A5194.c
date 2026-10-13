/* Entry 0x089A5194 | file offset 0x001A216C | FUN_089a5194 | bytes 92 */

undefined4 FUN_089a5194(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x80420100;
  if (DAT_09af7178 != 0) {
    uVar1 = __sceSasSetVoice(&DAT_09b6fec0,param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

