/* Entry 0x088CB948 | file offset 0x000C8920 | FUN_088cb948 | bytes 128 */

void FUN_088cb948(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_089d77f4 + 4) == 0) {
    uVar1 = FUN_088fe708(PTR_s_speakparam_bin_089d77f0,param_1,param_2,0);
    FUN_088fe944(PTR_s_speakparam_bin_089d77f0,param_1,uVar1);
    FUN_088cb84c(DAT_089d77f4,param_1);
  }
  return;
}

