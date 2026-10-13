/* Entry 0x08862288 | file offset 0x0005F260 | FUN_08862288 | bytes 176 */

bool FUN_08862288(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_250 [256];
  undefined1 auStack_150 [256];
  undefined1 auStack_50 [64];
  
  if (param_3 < 0x100) {
    FUN_0893476c(auStack_150,"dlc_%03doe.bin",param_3);
    FUN_08862678(auStack_250,"dlc/obj/",auStack_150);
    FUN_0893476c(auStack_50,"dlc/obj/dlc_%03doe.bin",param_3);
    uVar1 = FUN_08861b84(auStack_50);
    FUN_0893476c(param_2,"%s/%s.edat",auStack_250,uVar1);
  }
  return param_3 < 0x100;
}

