/* Entry 0x088A1274 | file offset 0x0009E24C | FUN_088a1274 | bytes 188 */

void FUN_088a1274(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08882118(0x19000,0x80);
  param_1[1] = uVar1;
  uVar1 = FUN_0885c40c(uVar1,0x19000,"SOUND MANAGER",0x40);
  *param_1 = uVar1;
  FUN_088a1a80(param_1);
  uVar1 = FUN_08882274(DAT_089d69a8);
  FUN_088823c4(uVar1,0xffffffff,100000,FUN_088a1ae4,"SOUND_MANAGER::ExecTask");
  FUN_08990db4(FUN_088a1b04,FUN_088a1b3c);
  FUN_0898ffb0();
  FUN_089913ec(0x200,4);
  return;
}

