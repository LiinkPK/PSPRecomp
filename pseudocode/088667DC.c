/* Entry 0x088667DC | file offset 0x000637B4 | FUN_088667dc | bytes 228 */

void FUN_088667dc(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0888204c(param_2 + param_3);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = FUN_0885c40c(uVar1,param_2 + param_3,"GRAPHICS::GRAPHICS",0x40);
  *(undefined4 *)(param_1 + 0x710) = uVar1;
  FUN_0899b6b0(FUN_088664c4,FUN_088664fc);
  FUN_089ba5bc(FUN_088664c4,FUN_088664fc,0x10,0);
  FUN_0899b6f4(FUN_088664c4,FUN_088664fc);
  FUN_089ba5f8(FUN_088664c4,FUN_088664fc,0x10,0);
  FUN_08940360(FUN_088664c4,FUN_088664fc);
  FUN_089ab464(FUN_088664c4,FUN_088664fc,0x10,0);
  FUN_089403a0(FUN_088664c4,FUN_088664fc);
  FUN_089ab4a0(FUN_088664c4,FUN_088664fc,0x10,0);
  return;
}

