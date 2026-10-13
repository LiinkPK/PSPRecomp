/* Entry 0x088626AC | file offset 0x0005F684 | FUN_088626ac | bytes 116 */

undefined4 FUN_088626ac(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_110 [256];
  
  uVar1 = FUN_08862678(auStack_110,&DAT_089c8fc0,param_2);
  uVar2 = FUN_08861b84(param_2);
  FUN_0893476c(param_1,"%s/%s.edat",auStack_110,uVar2);
  return uVar1;
}

