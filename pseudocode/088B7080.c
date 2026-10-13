/* Entry 0x088B7080 | file offset 0x000B4058 | FUN_088b7080 | bytes 72 */

undefined4 FUN_088b7080(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_08934944(param_2,*param_1 + 8,*(undefined4 *)(*param_1 + 4),0x90,&LAB_088b7054);
  }
  return uVar1;
}

