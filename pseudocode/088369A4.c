/* Entry 0x088369A4 | file offset 0x0003397C | FUN_088369a4 | bytes 132 */

void FUN_088369a4(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((param_3 & 0x4000) == 0) {
    uVar1 = FUN_0886b590(*(undefined4 *)(param_1 + 0x394),param_3);
    FUN_089a3fb8(param_2,param_1 + 0x330,uVar1);
  }
  else if (param_3 == 0x4000) {
    FUN_089a3efc(param_2,param_1);
  }
  else {
    FUN_089a3ebc(param_2);
  }
  return;
}

