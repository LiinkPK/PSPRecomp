/* Entry 0x088D08C0 | file offset 0x000CD898 | FUN_088d08c0 | bytes 196 */

undefined4 *
FUN_088d08c0(int param_1,undefined1 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 0x336c);
  **(undefined4 **)(param_1 + 0x336c) = 0;
  *(undefined4 *)(param_1 + 0x336c) = *(undefined4 *)(*(int *)(param_1 + 0x336c) + 4);
  uVar1 = FUN_088d0608(param_1,param_2);
  FUN_088da8e8(puVar2,uVar1);
  FUN_088da924(puVar2,0);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[2] = 0;
  if (param_4 != 0) {
    FUN_088dae0c(puVar2,param_4,param_5,0xffffffff,0xffffffff);
  }
  FUN_088ceec8(param_1,puVar2);
  *(undefined1 *)((int)puVar2 + 0x17) = 0;
  *(byte *)(puVar2 + 5) = *(byte *)(puVar2 + 5) | 1;
  return puVar2;
}

