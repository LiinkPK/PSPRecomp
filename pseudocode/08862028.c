/* Entry 0x08862028 | file offset 0x0005F000 | FUN_08862028 | bytes 132 */

void FUN_08862028(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_190 [256];
  undefined1 auStack_90 [128];
  
  FUN_08862678(auStack_190,&DAT_089c8ef0,param_2);
  FUN_0893476c(auStack_90,"bgm/%s",param_2);
  uVar1 = FUN_08861b84(auStack_90);
  FUN_0893476c(param_1,"%s/%s.edat",auStack_190,uVar1);
  return;
}

