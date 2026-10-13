/* Entry 0x088AE064 | file offset 0x000AB03C | FUN_088ae064 | bytes 228 */

void FUN_088ae064(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60 [3];
  undefined1 auStack_54 [64];
  
  FUN_088ae010(param_4,&local_80,&local_7c,&local_78,&local_74,&local_70);
  FUN_08867ca0(&local_6c);
  local_60[local_6c] = local_80;
  puVar1 = (&PTR_s__04d__02d__02d__d__02d_089d7130)[local_6c];
  local_60[local_68] = local_7c;
  local_60[local_64] = local_78;
  FUN_0893476c(auStack_54,puVar1,local_60[0],local_60[1],local_60[2],local_74,local_70);
  FUN_08867da8(auStack_54);
  FUN_0887df14(DAT_089d6998,param_2,param_3,auStack_54);
  return;
}

