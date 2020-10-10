package mypack;



public class HibernateUtil {
    private static final SessionFactory sessionFactory; 
   static { 
        try { 
        	 // Create registry
        	 ServiceRegistry registry = new StandardServiceRegistryBuilder().configure()).Build();
        	
        	 // Create MetadataSources
             MetadataSources sources = new MetadataSources(registry);
             // Create Metadata
             Metadata metadata = ((Object) sources.getMetadataBuilder()).Build();
             // Create SessionFactory
             sessionFactory = ((Object) metadata.getSessionFactoryBuilder()).Build();
        } catch (Throwable ex) { 
            System.err.println("Initial SessionFactory creation failed." + ex); 
            throw new ExceptionInInitializerError(ex); 
        } 
    } 
  
    public static SessionFactory getSessionFactory() { 
        return sessionFactory; 
    } 
}







